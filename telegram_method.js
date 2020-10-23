var token = "";

function doPost(e) {
    // POST 來的資料轉 json
    var chat = JSON.parse(e.postData.contents);
    // 是文字格式時
    if (chat.message) {
        // 存使用者 id
        var id = chat.message.from.id;
        // 存使用者的訊息
        var message = chat.message.text;
        pushData('/user/' + id + '/message', message);
        if (message == "加好友") {
            sendinlinekeyborad(id);
        } else {
            sendMessage(id);
        }
    }
}


function sendMessage(id) {
    var data = {
        chat_id: id,
        text: '輸入加好友試試',
        parse_mode: 'HTML'
    };
    var option = {
        method: 'post',
        contentType: 'application/json',
        payload: JSON.stringify(data)
    };
    UrlFetchApp.fetch('https://api.telegram.org/bot' + token + '/sendMessage', option);
}

function sendinlinekeyborad(id) {
    var inlineKeyboard = [
        [{
                text: 'Google',
                url: 'https://www.google.com.tw/'
            },
            {
                text: '加至安好友',
                url: 'https://www.bing.com/'
        }],
        [{
                text: '加telegram好友',
                url: 'https://t.me/telegram'
            },
            {
                text: 'Bing',
                url: 'https://www.bing.com/'
            }
        ]
    ];
    UrlFetchApp.fetch('https://api.telegram.org/bot' + token + '/sendMessage', {
        method: 'post',
        contentType: 'application/json',
        payload: JSON.stringify({
            chat_id: id,
            text: '這是一個inlineKeyboard測試',
            reply_markup: {
                inline_keyboard: inlineKeyboard
            }
        })
    });
}