苦しんで覚えるC言語
===

## chapter1
`main`関数は特別 -> C言語では`main`という名前の関数が一番初めに動作すると決まっている

全てのコードはマシン語にまでコンパイルされる

2進数
```
000101001101010100101010
000101010101010010110100
```

16進数
↓
```
01　85　AD　7F　7C　A4　FA　6B　AD
06　F5　AB　74　7E　DC　18　FA　A4
```

16進数の機械語を記号化したものがアセンブラ
```
MOV　　AH，BH
ADD　　AX，70
```
↓
```fortran
　DO 10 I＝1，10000
　 READ *，X
　 IF (X，GT，MAX)MAX＝X
10 CONTINUE
```

- 最初にプリプロセッサによって文字列の調整が行われる。 -> 空白や空行の結合、記号の置き換え
- コンパイル
- リンカによってリンクされる


`scanf` -> キーボードから文字列を受け取る関数
```c
int a;
scanf("%d", &a);
```

`&`(アンバサント)でポインタに対して参照をする

## chapter2
プログラムはトークンと呼ばれる最小単位にまで分割される

```c
int
main
(
void
)
{
return
1
;
}
```

## chapter3
`printf`によって標準出力を行う

`#include <std.io>` -> 疑似命令と呼ぶ。実際の動作には関係しない記述に対しての呼称

## chapter4
文字列への文字列以外の埋め込み -> 出力変換指定子を使う(eg: %d)
C言語における数値:
- 整数: 自然数, 0, 自然数の負数(`int`)
- 実数: 整数 + 小数(`double`)

先頭に`0`をつけると進数を指定することが出来る
- なし: 10進数
- 0: 8進数
- 0x: 16進数

実数値を表表示するためには`%f`を使用する

## chapter5
整数: `int`
実数: `double`

整数と実数での演算の答えは実数となる(暗黙的に型変換される)
明示的なキャスト
eg: 実数を整数(`int`)にキャストする

```c
(int)(1.10 * 200)
```

表示する数値の桁数を変更することも出来る(Pythonにもあった)
```c
printf("total: %5d", 10000)
// 10000

printf("total: %5d", 100)
// 自動で空白が入る ->  100
```

## chapter6
標準入力は`scantf`関数を用いる。
複数の入力を受け取ることも可能。
