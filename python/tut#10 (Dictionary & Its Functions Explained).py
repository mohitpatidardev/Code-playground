# dictionary is nothing but key value pairs

d1 = {"mohit":"pani-puri", "akash":"pizza", "afjal":"murgi",
      "vivek":"barger", "abhishek":{"B":"samosh", "L":"roti","D":"afjal ke sath murgi"}}

# print(type(d1))
d1["shivam"] = "Hamare dahi-bade"
d1.update({"sonu bhaiya":"420 C"})
del d1["sonu bhaiya"] # del is use for delete key value
print(d1)
print(d1["mohit"])
print(d1["abhishek"]["D"])
print(d1.keys())
print(d1.items())
d2 = d1.copy() # to copy the dictionary
del d2["mohit"]
print(d2)
print(d1)

