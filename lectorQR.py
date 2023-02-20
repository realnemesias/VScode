from pyzbar.pyzbar import decode
from PIL import Image

img = Image.open('E:\codesQR\myqr.png')

result = decode(img)

print(result)