n,m=list(map(int,input().split(' ')))
WordDict1={};WordDict2={}
for _ in range(m):
    word1,word2=input().split(' ')
    WordDict1[word1]=word2
    WordDict2[word2]=word1
sentence=input().split(' ')
for word in sentence:
    if word in WordDict2 and len(word)>=len(WordDict2[word]):
        sentence[sentence.index(word)]=WordDict2[word]
    elif word in WordDict1 and len(word)>len(WordDict1[word]):
        sentence[sentence.index(word)]=WordDict1[word]

print(' '.join(sentence))