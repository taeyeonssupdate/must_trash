h = float(input('Please enter your height(cm): '))
w = float(input('Please enter your weight(kg): '))

BMI = w/((h/100)**2)

if BMI > 35:
    print(f'Your BMI is {BMI:.1f}, you are extremely fat!')
elif BMI > 30 and BMI <= 35:
    print(f'Your BMI is {BMI:.1f}, you are fat!')
elif BMI > 27 and BMI <= 30:
    print(f'Your BMI is {BMI:.1f}, you are slightly fat!')
elif BMI > 24 and BMI <= 27:
    print(f'Your BMI is {BMI:.1f}, you are overweight!')
elif BMI > 18.5 and BMI <= 24:
    print(f'Your BMI is {BMI:.1f}, you have a normal weight.')
else:
    print(f'Your BMI is {BMI:.1f}, you are too light!')
