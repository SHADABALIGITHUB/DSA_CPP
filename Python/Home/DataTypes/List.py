list=[1,2,3,4,5]
print(list)
list.append('6')
print(list)

list.extend([7,8,'9'])
print(list)

coppied=list.copy()
coppied[8]='copied list'
print(coppied)

print(x:=list.sort())
