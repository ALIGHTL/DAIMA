x=float(input(""))
y=str(input(""))
if y==73 or 99:
    z=x*1.8+32
    print("%.2ff"%z)
if y==76 or 102:
    z=(x-32)/1.8
    print("%.2fC"%z)
else:
    print("error")
    
