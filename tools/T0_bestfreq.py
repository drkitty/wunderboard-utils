#!/usr/bin/env python3

from T0_COMPA_frequency import *

print("N   OCR0A   freq")
print();

def main():
	for N in [1, 8, 256, 1024]: # prescaler
		minFreqError = 1
		bestFreq = int()
		bestOCR0A = int()
		for OCR0A in range(0xFF):
			freq = f_COMPA(N, OCR0A) # frequency of COMPA interrupt
			freqError = abs(freq - int(freq))
			if (freqError < minFreqError):
				minFreqError = freqError
				bestFreq = freq
				bestOCR0A = OCR0A
			#print("N = {}, OCR0A = 0x{:X}".format(N, OCR0A))
			#print("freq = {}".format(freq))
		print("{}   0x{:X}   {}".format(N, bestOCR0A,bestFreq))

if __name__ == "__main__":
	main()
