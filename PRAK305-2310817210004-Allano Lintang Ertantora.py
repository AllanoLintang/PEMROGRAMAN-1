for i in range(0, 5):
    d = int(input())
    jj = d // 3600
    mm = (d % 3600) // 60
    dd = d % 60
    if jj >= 24:
        hh = jj // 24
        jj = jj % 24
        print(f'{hh} hari {jj:02}:{mm:02}:{dd:02}')
    else:
        print(f'{jj:02}:{mm:02}:{dd:02}')