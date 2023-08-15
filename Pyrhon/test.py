class Sample:
    i = 10
    def __init__(self, x):
        self.x = x

    def myFun_1(self):
        print(f'This if myFun_1 and self.x = {self.x}')

    def myFun_2(xyz): # Here xyz is used instead of self
        print(f'This if myFun_2 and xyz.x = {xyz.x}')

obj = Sample(10)
obj.myFun_1()
obj.myFun_2()