import sys
import time
import requests

send = [
    "Iu8D5hdLkp52N0ugen50jRIvyOrg9nK6FkJcCPEqA84",
    "gRsekOZOBhVAwXswslrUnfbq5DGm2hG6SwoyaRBW7c2",
]

for i in range(int(sys.argv[2]), -1, -1):
    for token in send:
        requests.post(
            "https://notify-api.line.me/api/notify",
            headers={
                "Authorization": "Bearer " + token,
                "Content-Type": "application/x-www-form-urlencoded"
            },
            params={"message": f"\n地震震度大概{sys.argv[1]} {i}秒後會開啟搖晃"}
        )
    time.sleep(1)
