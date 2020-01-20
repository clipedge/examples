#!/usr/bin/python

import urllib
import urllib2

url = 'http://couponqueen.org/cgi-bin/getcoupons.cgi'
user_agent = 'Mozilla/5.0 (Windows NT 5.1; rv:6.0.2) Gecko/20100101 Firefox/6.0.2'
values = {'category' : 'Foods'}
headers = { 'User-Agent' : user_agent }

data = urllib.urlencode(values)
req = urllib2.Request(url, data, headers)
response = urllib2.urlopen(req)
the_page = response.readlines()
print ("%s") % (the_page)
