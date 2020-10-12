from lxml import html
import requests

""" the URL"""
url = 'http://158.69.76.135/level0.php'
""" obtaining resources"""
page = requests.get(url)

"""Verifying if page exits"""
if (page.status_code == 200):
    """save html"""
    tree = html.fromstring(page.content)
    """creat session object"""
    s = requests.Session()
    """take the session of level0"""
    s.get(url)
    """it actualized the header"""
    headers = {
        'Referer': 'http://158.69.76.135/level0.php'
    }
    payload = {
        'id': 1590,
        'holdthedoor': 'Valider'
    }
    for i in range(1024):
        s.post('http://158.69.76.135/level0.php', headers=headers, data=payload)
else:
    print("no found")
