# # first
#
# list1 = ["mohit", "akash", "vivek", "abhishek","afjal"]
#
# # print(list1[0], list1[1])
#
# for item in list1:
#     print(item)
#
# #second

# list1 = [["mohit", 10] , ["akash", 4] , ["vivek", 2], ["abhishek", 15] ,["afjal", 1]]
#
# dict1 = dict(list1)
#
# for item , samosa in dict1.items():
#     print(item ,"and samosa is", samosa)

# #third
# #for with if

# list1 = [["mohit", 10] , ["akash", 47] , ["vivek", 2], ["abhishek", 15] ,["afjal", 1]]
#
# dict1 = dict(list1)
#
# num = int(input("Number of samosa :"))
# dict2 ={}
# dict3 ={}
# for item , samosa in dict1.items():
#     if samosa>num:
#         dict2[item]=samosa
#     else:
#         dict3[item]=samosa
#
# mystr = str(dict1)
# print(mystr)
# print(mystr.endswith("afjal"))
# print("Haafsi :",dict2)
# print("Lallulal : ", dict3)

# #fourth
# #Q. create a list with random items and cheack items are number or not if item is number then check
# #whether it is  greator then 6 or not.

list1 = ["mohit",7 , 16 , "rohit" , 4 , 6 , 8]

for item in list1:
    if int == type(item) and item>6:
        print(item)
    elif item == 6:
        print("6 is Equal to 6 ")



