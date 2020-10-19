
# Python3 code to demonstrate working of  
# Convert Snake case to Pascal case 
# Using capwords() 
import string 
  
# initializing string 
test_str = 'geeksforgeeks_is_best'
  
# printing original string 
print("The original string is : " + test_str) 
  
# Convert Snake case to Pascal case 
# Using capwords() 
res = string.capwords(test_str.replace("_", " ")).replace(" ", "") 
  
# printing result  
print("The String after changing case : " + str(res))  
