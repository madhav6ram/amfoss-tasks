import requests
import argparse

p = argparse.ArgumentParser()
p.add_argument("-i", action="store", required=True, help="Enter the ID associated with the image.")
p.add_argument("-d", action="store", required=True, help="Enter the Earth Date (format yyyy-mm-dd) associated with the image.")
args = p.parse_args()

result = requests.get(f"https://api.nasa.gov/mars-photos/api/v1/rovers/curiosity/photos?earth_date={args.d}&api_key=DEMO_KEY").json()

print("\nLink to image: \n")
for dicts in result["photos"]:
    photos_index = result["photos"].index(dicts)
    if result["photos"][photos_index]["id"] == int(args.i):
        print(result["photos"][photos_index]["img_src"], "\n")
