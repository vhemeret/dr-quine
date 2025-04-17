
def quine():
    try:
        open('Grace_kid.py', 'w')
    except Exception as e:
        print('Error: ', {e})

quine()