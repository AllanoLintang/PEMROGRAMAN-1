kalimatSatu = input()
kalimatDua = input()
if len(kalimatSatu) != len(kalimatDua):
    print('Panjang kalimat berbeda, pesan palsu')
else:
    sama = 0
    beda = 0
    for i in range(len(kalimatSatu)):
        if kalimatSatu[i] == kalimatDua[i] and kalimatSatu[i] != " " and kalimatDua[i] != " ":
            print("*", end="")
            sama += 1
        elif kalimatSatu[i] == ' ' and kalimatDua[i] == ' ':
            print(" ", end="")
        else:
            print("#", end="")
            beda += 1
    print()
    print(f'* = {sama}')
    print(f'# = {beda}')
    if sama > beda:
        print('Pesan asli')
    else:
        print('Pesan palsu')    