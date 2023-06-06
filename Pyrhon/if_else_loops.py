

#for i in range(0,5,1):
while True:
    weather = int(input("""what is the weather today 
                1: rainy 2: sunny 3: cold"""))

    beverage = ''
    if weather == 1 : #'rainy'
        beverage = 'coffee'
    elif weather == 2 : # 'sunny'
        beverage = 'Ice tea'
    elif weather == 3 : # 'cold'  
        beverage = 'Hot tea/coffee'
    # else:
    # 	beverage = 'Water'

    print(f"Lets have {beverage} today !!!")
    
    choice = input('Press n to exit ').lower()
    if choice == 'n' :
        break
