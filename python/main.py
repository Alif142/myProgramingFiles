
def join_strings(strings):
    mystring = ""
    main_string = ""
    for string in strings:
        mystring += string + ","
    for i in range(0,len(mystring)-1):
        main_string+=mystring[i]
    return main_string

    

