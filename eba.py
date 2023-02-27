def print_to_98(num):
	while num <= 98 or num >= 98:
		if num == 98:
			print(num)
			break
		elif num < 98:
			print(num,end=", ")
			num +=1
		elif num > 98:
			print(num,end=", ")
			num -=1

print_to_98(-2)