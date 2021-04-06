x=int(input("Enter the amount in multiple of 5 which is to be withdrawed: "))
y=float(input("Enter the account balance: "))
if x>y:
print("The transaction is not successfull You do not have required balance”)
print("The balance is: ", end=’’)
print(round(y,2))
elif x%5==0 and x0 and y>0:
balance=y-x-0.5
print("Your Transaction is successful. The balance after the transaction is: ", end=’’)
print(round(balance,2))
else:
print(“The transaction is not successfull. Enter the required value in multiple of 5”)
print("The balance is: ", end=’’)
print(round(y,2))

