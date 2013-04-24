#!/usr/bin/env python3

def f_COMPA(N, OCR0A):
	return (8000000/(N*(OCR0A+1)))

def main():
	N = int(input("N = "))
	OCR0A = int(input("OCR0A = "), base=16)
	print(f_COMPA(N, OCR0A))

if __name__ == "__main__":
	main()
