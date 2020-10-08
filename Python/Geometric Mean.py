end_price = 313.6
start_price = 153
interest = 0.06741909042
# Bruteforcing using for loop algorithm.
current_price = start_price
for i in range(0, 11):
    current_price = (current_price * interest) + current_price
    print(current_price)

current_price = round(current_price, 4)

if(current_price == end_price):
    print(
        f"The predicted price: {end_price} and the final price {current_price} is correct!")

# Instead of doing it recursively use
# Geometric Mean formula:
# GM = ((n-1) root of value_end/value_start) - 1
# value_end = value at the end of the period.
# value_start = value at the start of the period.
