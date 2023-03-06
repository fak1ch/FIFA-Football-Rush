﻿mergeInto(LibraryManager.library, {
    
    GiveMePlayerData: function () {
        myGameInstance.SendMessage('Yandex', 'SetName', player.getName());
        myGameInstance.SendMessage('Yandex', 'SetPhoto', player.getPhoto("medium"));
    },

    RateGame: function () {

        ysdk.feedback.canReview()
            .then(({ value, reason }) => {
                if (value) {
                    ysdk.feedback.requestReview()
                        .then(({ feedbackSent }) => {
                            console.log(feedbackSent);
                        })
                } else {
                    console.log(reason)
                }
            })
    },


    SaveExtern: function(date) {
        var dateString = UTF8ToString(date);
        var myobj = JSON.parse(dateString);
        player.setData(myobj);
    },

    LoadExtern: function(){
        player.getData().then(_date => {
            const myJSON = JSON.stringify(_date);
            myGameInstance.SendMessage('Progress', 'SetPlayerInfo', myJSON);
        });
    },

    SetToLeaderboard : function(value){
        ysdk.getLeaderboards()
            .then(lb => {
                lb.setLeaderboardScore('Height', value);
            });
    },

    GetLang: function () {
        var lang = ysdk.environment.i18n.lang;
        var bufferSize = lengthBytesUTF8(lang) + 1;
        var buffer = _malloc(bufferSize);
        stringToUTF8(lang, buffer, bufferSize);
        return buffer;
    },

    ShowInterstitialAd : function(){
        ysdk.adv.showFullscreenAdv({
            callbacks: {
                onClose: function(wasShown) {
                    console.log("------------- closed --------------");
                    // some action after close
                },
                onError: function(error) {
                    // some action on error
                }
            }
        })
    },

    ShowRewardedAd : function(){
        ysdk.adv.showRewardedVideo({
            callbacks: {
                onOpen: () => {
                    console.log('Video ad open.');
                },
                onRewarded: () => {
                    SendMessage('YandexSDK(Clone)', 'SendRewardedAdRewarded');
                    console.log('Rewarded!');
                },
                onClose: () => {
                    SendMessage('YandexSDK(Clone)', 'SendRewardedAdClosedEvent');
                    console.log('Video ad closed.');
                },
                onError: (e) => {
                    console.log('Error while open video ad:', e);
                }
            }
        })
    },

});