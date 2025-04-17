import subprocess

def main():
	x = 5
	if x <= 0:
		return

	newX = x - 1
	newFile = "Sully_{newX}.py".format(newX=newX)

	str = 'import subprocess\n\ndef main():\n\tx = {x}\n\tif x <= 0:\n\t\treturn\n\n\tnewX = x - 1\n\tnewFile = "Sully_{{newX}}.py".format(newX=newX)\n\n\tstr = {str!r}\n\n\ttry:\n\t\twith open(newFile, "w") as newSully:\n\t\t\tnewSully.write(str.format(x=newX, str=str))\n\t\tif newX >= 0:\n\t\t\tsubprocess.run(["python3", newFile])\n\texcept Exception as e:\n\t\tprint("Error:", e)\n\nif __name__ == "__main__":\n\tmain()'

	try:
		with open(newFile, "w") as newSully:
			newSully.write(str.format(x=newX, str=str))
		if newX >= 0:
			subprocess.run(["python3", newFile])
	except Exception as e:
		print("Error:", e)

if __name__ == "__main__":
	main()