import csv 
with open("e:\\data\\data.csv","wb") as f:
    headings=['Rollno','name']
    dwriter=csv.DictWriter(f,headings)
    dwriter.writeheader
    dwriter.writeraw({"rollno":"Name":"A"})