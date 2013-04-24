#!/usr/bin/env python3

from T0_COMPA_frequency import *

def main():
	for N in {1, 8, 256, 1024}:
		for OCR0A in range(0xFF):
			temp = f_COMPA(N, OCR0A)
			if abs(temp - int(temp)) <= .01:
				print("N = {}, OCR0A = 0x{:X}".format(N, OCR0A))
				print(temp)

if __name__ == "__main__":
	main()
