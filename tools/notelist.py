#!/usr/bin/env python3

from sys import argv
from math import floor

noteNames = [ "A", "As", "B", "C", "Cs", "D", "Ds", "E", "F", "Fs", "G", "Gs" ]

def f_COMPA(N, OCRnA):
	return (8000000/(N*(OCRnA+1)))

def noteToFreq(note):
	return pow(2,(note-49)/12)*440

def freqToOCR1A(N, target):

	minFreqError = .5
	bestOCRnA = -1
	bestFreq = -1

	for OCRnA in range(0x10000):
		freq = f_COMPA(N, OCRnA)/2
		freqError = abs(freq - target)
		if freqError < minFreqError:
			#print("{}   0x{:X}   {}".format(N, OCRnA, freq))
			minFreqError = freqError
			bestOCRnA = OCRnA
			bestFreq = freq

	#if bestFreq != -1:
		#print("{}   0x{:X}   {}".format(N, bestOCRnA, bestFreq))

	return (N, bestOCRnA, bestFreq, minFreqError)

def noteStr(note):
	return noteNames[(note-1)%12] + str(floor((note-1)/12))

def main():
	try:
		N = int(argv[1])
		first = int(argv[2])
		last = int(argv[3])
	except:
		print("ERROR: argument error")
		print()
		print("usage:")
		print("\tnotelist.py prescaleFactor firstNote lastNote")
		exit(1)

	print("enum note_t {")

	for note in range(first, last + 1): # because Python hates happiness
		target = noteToFreq(note)
		bestValues = freqToOCR1A(N, target)

		#print("{}  =  {}   0x{:X}   {}\t\terr = {}".format(note, bestValues[0],
			#bestValues[1], bestValues[2], bestValues[3]))

		if bestValues[1] != -1:
			if note == last:
				commaMaybe = ""
			else:
				commaMaybe = ","

			bestOCRnA = "0x{:X}".format(bestValues[1])

			line = "\t{:<3} = {:>6}{:<1}  //  {:<7.6} Hz  +/- {:.2}".format( \
					noteStr(note), bestOCRnA, commaMaybe, target,
					bestValues[3])
			print(line)
	print("};")


if __name__ == "__main__":
	main()
