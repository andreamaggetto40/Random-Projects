import random,string

int_str = "0123456789"


def random_symbol():        
    symbols = string.ascii_uppercase + string.ascii_lowercase + int_str
    symbol_choosed = random.randrange(0,len(symbols) - 1)

    return str(symbols[symbol_choosed])


password = ""

for i in range(0,21):
    password += random_symbol()
    

new_password = open("password.txt","w")
new_password.write(password)
new_password.close()
