t = int(input())
import time
i = 0
from datetime import datetime, timedelta

mon = ['January', 'February', 'March', 'April', 'May', 'June', 'July',
              'August', 'September', 'October', 'November', 'December']
while i < t:
    d, m, y = str(input()).split()
    d, y = int(d), int(y)
    a = datetime(y, mon.index(m) + 1 , d)
    res = a - timedelta(days=1)
    print(res.strftime('%d %B %Y'))
    i += 1
