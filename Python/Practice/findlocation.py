import phonenumbers
import opencage
import folium
number = input("Enter phone number eg:(+959.......): ")

#get phone number location
from phonenumbers import geocoder
ch_number = phonenumbers.parse(number)
location = geocoder.description_for_number(ch_number, 'en')
print('Country: ', location)

#get service provider
from phonenumbers import carrier
ca_number = phonenumbers.parse(number)
carr = carrier.name_for_number(ca_number, 'en')
print('Carrier: ', carr)

#get opengeocode map
from opencage.geocoder import OpenCageGeocode
key = '8114604a5e514f919737310797123a50'
geocode = OpenCageGeocode(key)
query = str(location)
results = geocode.geocode(query)

#print(results)
lat = results[0]['geometry']['lat']
lng = results[0]['geometry']['lng']
# print(f"latitude: {lat}")
# print(f"langitude: {lng}")

# get map
map = folium.Map(location=[lat, lng], zoom_start= 9)
folium.Marker([lat, lng], popup=location).add_to(map)
map.save("location.html")



