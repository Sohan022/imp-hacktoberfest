#import literal_eval from ast module
from ast import literal_eval
 
string = '0xF'
 
# conversion
dec = literal_eval(string)
 
print("The hexadecimal string is: ", string)
print("The decimal number is: ", dec)
