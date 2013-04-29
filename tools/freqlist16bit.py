#!/usr/bin/env python3

from sys import argv

def f_COMPA(N, OCR0A):
	return (8000000/(N*(OCR0A+1)))

def main():
	try:
		maxFreqError = float(argv[1])
	except:
		print("ERROR: argument error")
		print()
		print("usage:")
		print("\tT0_COMPA_frequency_list.py maxFrequencyError")
		exit()


	print("N   OCRnA   freq")
	print()

	for N in [1, 8, 64, 256, 1024]: # prescaler
		for OCR0A in range(0x10000):
			freq = f_COMPA(N, OCR0A) # frequency of COMPA interrupt
			freqError = abs(freq - int(freq))
			if freqError < maxFreqError:
				print("{}   0x{:X}   {}".format(N, OCR0A, freq))
				#print("{}\t0x{:X}\t{}".format(N, OCR0A, freq))

if __name__ == "__main__":
	main()
