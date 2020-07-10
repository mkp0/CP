class Person:
    def __init__(self, initalAge):
        if initalAge>=0:
            self.age = initalAge
        else:
            print("Age is not valid, setting age to 0.")
            self.age = 0
    def yearPasses(self):
        self.age = self.age + 1;
    def amIOld(self):
        if self.age < 13:
            print("You are young.")
        elif self.age >= 13 and self.age < 18:
            print("You are a teenager.")
        else:
            print("You are old.")
    
no_of_cases = int(input())

for x in range(0, no_of_cases):
    age = int(input())
    obj = Person(age)
    obj.amIOld()
    for j in range(0, 3):
        obj.yearPasses()       
    obj.amIOld()
    print("")