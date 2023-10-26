def swap(a,b):
    a,b=b,a
    print(a,b)
print(__name__)
def main():
    a=10
    b=20
    print(a,b)
    swap(a,b)
    print(a,b)
if __name__=='__main__':
    main()
