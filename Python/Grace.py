# The alone comment
def quine():
	str = "# The alone comment\ndef quine():\n\tstr = {!r}\n\ttry:\n\t\twith open('Grace_kid.py', 'w') as lilGrace:\n\t\t\tlilGrace.write(str.format(str))\n\texcept Exception as e:\n\t\tprint('Error: ', {{e}})\n\nquine()"
	try:
		with open('Grace_kid.py', 'w') as lilGrace:
			lilGrace.write(str.format(str))
	except Exception as e:
		print('Error: ', {e})

quine()