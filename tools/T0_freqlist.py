#!/usr/bin/env python3

from T0_COMPA_frequency import *
from sys import argv

try:
	maxFreqError = float(argv[1])
except:
	print("ERROR: argument error")
	print()
	print("usage:")
	print("\tT0_COMPA_frequency_list.py maxFrequencyError")
	exit()


print("N   OCR0A   freq")
print();

def main():
	for N in {1, 8, 256, 1024}: # prescaler
		for OCR0A in range(0xFF):
			freq = f_COMPA(N, OCR0A) # frequency of COMPA interrupt
			freqError = abs(freq - int(freq))
			if freqError < maxFreqError:
				print("{}   0x{:X}   {}".format(N, OCR0A, freq))
				#print("{}\t0x{:X}\t{}".format(N, OCR0A, freq))

if __name__ == "__main__":
	main()