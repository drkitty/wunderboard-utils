#!/usr/bin/env python3

from sys import argv

def f_COMPA(N, OCRnA):
	return (8000000/(N*(OCRnA+1)))

def main():
	try:
		maxFreqError = float(argv[1])
	except:
		print("ERROR: argument error")
		print()
		print("usage:")
		print("\tfreqlist16bit.py maxFrequencyError")
		exit(1)


	print("N   OCRnA   freq")
	print()

	for N in [1, 8, 64, 256, 1024]: # prescaler
		for OCRnA in range(0x10000):
			freq = f_COMPA(N, OCRnA) # frequency of COMPA interrupt
			freqError = abs(freq - int(freq))
			if freqError < maxFreqError:
				print("{}   0x{:X}   {}".format(N, OCRnA, freq))

if __name__ == "__main__":
	main()
