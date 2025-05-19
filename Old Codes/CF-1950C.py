t = int(input())

for _ in range(t):
    a = input()
    hour = a[:2]
    minutes = a[3:]
    
    if int(hour)<12:
        if hour != '00':
            print(f"{hour}:{minutes} AM")
        elif int(hour) == 0:
            print(f"12:{minutes} AM")
    
    elif hour =='24':
            print(f"01:{minutes} AM")
            
    else:
        if int(hour) >= 12 and int(hour)<24:
            if int(hour) > 12: 
                time = int(hour)-12
                if time < 10:
                    print(f"0{time}:{minutes} PM")
                else:
                    print(f"{time}:{minutes} PM")
                    
            elif hour == '12':
                print(f"{hour}:{minutes} PM")
        
        
        