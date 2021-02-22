theboard={'top-L': '','top-M': '','top-R': '', 'mid-L': '', 'mid-M': '', 'mid-R': '', 'low-L': '', 'low-M': '', 'low-R': ''}
def printboard(board):
    print(board['top-L'] + '|' + board['top-M'] + '|' + board['top-R'])
    print('-+-+-')
    print(board['mid-L'] + '|' + board['mid-M'] + '|' + board['mid-R'])
    print('-+-+-')
    print(board['low-L'] + '|' + board['low-M'] + '|' + board['low-R'])
turn='X'

for i in range(9):
    printboard(theboard)
    if i>4:
        if theboard['top-L']!='':
            if theboard['top-L']==theboard['top-M'] and theboard['top-M']==theboard['top-R']:
                print(" last turn winner")
                break
        if theboard['mid-L']!='':
            if theboard['mid-L']==theboard['mid-M'] and theboard['mid-M']==theboard['mid-R']:
                print(" last turn winner")
                break
        if theboard['low-L']!='':
            if theboard['low-L']==theboard['low-M'] and theboard['low-M']==theboard['low-R']:
                print(" last turn winner")
                break
        if theboard['top-L']!='':
            if theboard['top-L']==theboard['mid-L'] and theboard['mid-L']==theboard['low-L']:
                print(" last turn winner")
                break
        if theboard['top-M']!='':
            if theboard['top-M']==theboard['mid-M'] and theboard['mid-M']==theboard['low-M']:
                print(" last turn winner")
                break
        if theboard['top-R']!='':
            if theboard['top-R']==theboard['mid-R'] and theboard['mid-R']==theboard['low-R']:
                print(" last turn winner")
                break
        if theboard['top-L']!='':
            if theboard['top-L']==theboard['mid-M'] and theboard['mid-M']==theboard['low-R']:
                print(" last turn winner")
                break
        if theboard['top-R']!='':
            if theboard['top-R']==theboard['mid-M'] and theboard['mid-M']==theboard['low-L']:
                print(" last turn winner")
                break
    while(True):
        print('turn for' +turn+ '.move on which space?')
        move=input()
        if move=='top-L' or move=='top-M' or move=='top-R' or move=='mid-L' or move=='mid-M' or move=='mid-R' or move=='low-L' or move=='low-M' or move=='low-R':
            if theboard[move]=="":
                theboard[move]=turn
                if turn=='X':
                    turn='O'
                else:
                    turn='X'
                break
            else:
                print("filled up")
        else:
            print("invalid")
printboard(theboard)
input()
