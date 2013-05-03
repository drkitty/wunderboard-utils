#!/usr/bin/env python3

from sys import argv

def f_COMPA(N, OCRnA):
	return (8000000/(N*(OCRnA+1)))

def main():
	try:
		N = int(argv[1])
		OCRnA = int(argv[2], 0) # guess base
	except:
		print("ERROR: argument error")
		print()
		print("usage:")
		print("\tf_COMPA.py N OCRnA")
		exit()

	print(f_COMPA(N, OCRnA))


if __name__ == "__main__":
	main()
