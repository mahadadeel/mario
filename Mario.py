##Mario (Python Ver)
#Mahad Adeel, 06/09/20

try:
    while True:
        height = int(input("The height of the pyramid must be a full non-zero number less than 23\nIf a decimal is entered it will be rounded down\nEnter height: "))
        height += 0
        if not 0 < height <= 23:
            print("Enter a number within range")
        else:
            break
except:
    print("Enter a valid height.")

for i in range(1,height+1):
    print(((" "*(height-i))+("#"*i))+"#")
