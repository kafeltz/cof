import http.client


connection = http.client.HTTPSConnection("www.journaldev.com")
connection.request("GET", "/")
response = connection.getresponse()
print("Status: {} and reason: {}, dados: {}".format(response.status, response.reason, response.read()))
