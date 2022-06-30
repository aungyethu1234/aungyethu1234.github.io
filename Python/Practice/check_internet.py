from turtle import down
import speedtest 
import requests
from url import *
try:
    request = requests.get(url,timeout=4)
    print("Internet Connected")
    print('......................')
    st = speedtest.Speedtest()
    print("Loading Server List...")
    server_list = st.get_servers()
    print("Finding best server...")
    best_server = st.get_best_server()
    print(f"Found: {best_server['host']} Locate in {best_server['country']}")
    print("Performing download speed test...")
    print("Performing upload speed test...")
    down_speed = st.download() 
    up_speed = st.upload()
    ping_result = st.results.ping
    print(f"Download speed: {down_speed / 1024 / 1024:.2f} Mbits/s")
    print(f"Upload speed: {up_speed / 1024 / 1024:.2f} Mbits/s")
    print(f"Ping result: {ping_result} ms")
except:
    print("No Internet")


