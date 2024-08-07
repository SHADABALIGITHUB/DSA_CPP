#  dictionary methods 

lang={"Python":9,"Java":8,"Cpp":6,"Rust":10,"JavaScript":7}
print(lang)

# copy function 

newlang=lang.copy()
print(newlang)

newlang["Python"]="No data"
print(newlang)
print(lang)

# fromkeys function

data={1,2,3,4,5,6}
newlang2=lang.fromkeys(data)
print(newlang2)
print(lang)



newlang3=lang.fromkeys(data,1)
print(newlang3)
print(lang)


# get function

print(lang.get('Python'))

# pop

lang.pop('Python')
print(lang)


# items
lang.i


lang.clear()
print(lang)
