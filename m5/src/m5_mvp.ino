#include <M5Unified.h>

// 起動時に1回だけ実行される初期化処理
void setup()
{
    // M5Stack本体の標準設定を取得
    auto cfg = M5.config();

    // M5Stack本体、画面、電源などを初期化
    M5.begin(cfg);

    // 画面の向きを横向きに設定
    M5.Display.setRotation(1);

    // 画面全体を黒色で塗りつぶす
    M5.Display.fillScreen(TFT_BLACK);

    // 文字色を白色に設定
    M5.Display.setTextColor(TFT_WHITE);

    // 文字サイズを3倍に設定
    M5.Display.setTextSize(3);

    // 文字の基準位置を中央に設定
    // MC_DATUMは「Middle Center」の意味
    M5.Display.setTextDatum(MC_DATUM);

    // 画面の中央に「Hello World」を表示
    M5.Display.drawString(
        "Hello World",
        M5.Display.width() / 2,   // 画面中央のX座標
        M5.Display.height() / 2   // 画面中央のY座標
    );
}

// setup()終了後に繰り返し実行される処理
void loop()
{
    // ボタンやタッチ操作など、M5Stackの状態を更新
    M5.update();

    // 処理負荷を抑えるため100ミリ秒待機
    delay(100);
}