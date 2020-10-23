var firebaseUrl = ''; //firebase 連結網址 注意:結尾需有/
var secret = ''; //firebase 上拿到的密鑰
var base = FirebaseApp.getDatabaseByUrl(firebaseUrl, secret);
// firebase set
function setData(key, value) {
    base.setData(key, value);
}
// firebase update
function updateData(key, value) {
    base.updateData(key, value);
}
// firebase push
function pushData(key, value) {
    base.pushData(key, value);
}
// firebase get data
function getData(target) {
    target = target || null;
    if (target !== null) {
        return base.getData(target);
    } else {
        return base.getData();
    }
}