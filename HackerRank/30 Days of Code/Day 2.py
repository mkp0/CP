import math

def net_cost(meal_cost, tip_per, tax_per):
    net_cost = round(meal_cost + (meal_cost * tip_per) / 100 + (meal_cost * tax_per) / 100)
    print(net_cost)

meal_cost = float(input())
tip_per = int(input())
tax_per = int(input())

net_cost(meal_cost,tip_per,tax_per)

