# Comment outsid main function

def printFunction():
	str = '# Comment outsid main function\n\ndef printFunction():\n\tstr = {!r}\n\tprint(str.format(str))\n\ndef main():\n\t# Comment inside main function\n\tprintFunction()\n\nif __name__ == "__main__":\n\tmain()'
	print(str.format(str))

def main():
	# Comment inside main function
	printFunction()

if __name__ == "__main__":
	main()
