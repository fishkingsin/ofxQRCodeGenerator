#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    rcQRCode = qrCodeGenerator.generate( "http://www.robotconscience.com", 250 );
    OFQRCode = qrCodeGenerator.generate( "http://www.openframeworks.cc", 250 );
    labQRCode = qrCodeGenerator.generate( "http://rockwellgroup.com/lab-notes", 250 );
    longQRCode  = qrCodeGenerator.generate( "http://www.longurlmaker.com/go?id=UAOJNVKBMQUGPYZKCQZRZKJEXRCRXMRSMFBZBMBODWUSVTDXJCPJMYOKQQBODSGPYHPZURNXNIQIBUGLWVUJUIUKZVYCOFSNMIMHZAEMIVVKPCVMYPVTYPEYLDBAITNUCACBBHOKCKUSMPEKFADEPHCBLEBTXPOZPQBQXPBAZVSMLXXRXAVMIYNTCPNAEBAURBKORMORHHDTEAKBBGOKEBEGRRHVSHPKIAYZNNQUVUOZUYAVEOGJQKQIBXEUEUEMUDMHRDCMXQLRPMNUBUDSETAGQEAUZFHTITBZXEMUVYMLKAFMUJFYCFFTKGOJLWDUPFUMKGHGETRPTXCNGHMJNRCYXRIINLCDRWQCDXIHRZXKWZYDHKMUCPSZHAIUMLYEIOGMMPUDPROMRNPYXCTARLAYMJTYURDDGKPSZKWOBLBTYQRWSKWKWWJIFCHAULEAVUTUEQJFBKZZBQWUBSEYPNGUQOVKZZKVTEPXUZDVKCVLTRFUKKTZXZTOOPYOOJJINYGHYJDJMYUFQAAAKTZITTXHIVVXEEGSDMZCVDLICGNSGNTRHSAAMXIVSDTXIZPMLPOHTZPVFCNMQHEXZEYMCGHVKBSSAIEMYTTRTJMZMALCHQAHUZUWFBRPCKIDTNPSGIJASWZEWLHEBHMVGGSMIKBLVKOPXDHEMREENEIKPQPQXBMEHFRQQTBLDPBBTIFGZKLNOUYDKNUIPGNXMENCXOOBEPCYYHEYRQLFKJJUXDCMKQJWUWZSLNTQCVOBCTZUJKATUJOSNRFXHOUBLTTXGNNJIBKLVKGEVGYQQMIEENCLCWMNQGKXTXHCZSNVCTZXAYNRLVVPJXALUNZLUKIOIPQHHDDKXDHXBUPMQKCZIDLCQKNLVWZDLPLTTOERRLPSGEFWOIWXLIZCTNNOJNRVDCPXRTOIEEBKIHHXPDUBLUDEHRTQFKMINBFEUUNZYOKHVRELVZMHTQMBIFRNQEWDFCIAWVZVJKCFBHRXGEEAUQBDWTRMXNQCQYDMUDHENKKORBMXFQXAHYEESVQPJHSZGVMAYUFLEPAWRMTWDRXKQCPIXGXHNPHULTVJOAVTQWPHJJEMACXREMABSXJGNQAZKVJZWESMAHTJQYWRATJEGJGYHPEVGFUQADQWHIJIQDSGBOYBIHFORLNYBSTHXNYYQOVYWEHMHZTIOSKXAPMRBZPCSJKPWIONXJLTOTGWSAFHTPFTFRLGQAJIKTYGCMTZWFTLYAHRAMZUCEOHVZOMAYVKRUQUHKTDPMPONWFOJFIMJWTFVIRWGNGYHXTPHMSXZILNFRBOWJAGGULCDDYKQEJYBCNJPGGPOSCTKDIHNJNTEYVHCTSSYBRAEEJTLQJZJLTTOCBCLOVQNRXPLQIJSZKWETQPKZPTKJNZLOCXDXNQPLFABOKTNVQSOGHZGXSRGGQSVSPYQCOGNUHPISJWNZOCGWBMTUDZBURWNHUDJIKXDRNMJWIWWWZCTAOMVSMWMDSZLMDVVNTYFGKODTLZQKBJLQVGIHCVLVUWHYSDMLBRRMGUGSUWDVGOMCVUKYPVTKSAIKDVWFMNSTIYLCVOYBCKEYFOWVKPGCQPNTKJZXXRQFQBIMQHOTRSRXGNTQCZTSOHMZQLWODMUUOCGEJUXBMOZSCSJERDWGKJFBUCPYPJSDMYIWSGYFVXYXQHBIKYOUHUVCXLAMVSPIQYEJEDOZBMWRUYZEWOZEJVGGGGSCZIKQGPZLSOKTAHKUFKZCYYHIUNOBUHDUPNKWDKHVYSPZAAUGKTIJSQRMDGNYNRSDFDAINIELAULBUFHFZQPRGHEKNRIBJBFOEFWRNADOUPPPUWVTNKLTRPDFHLHQNMERSBJGCNUXCKMXHHRUSCNJRRPZDWQQJUIBWSHYFCVINIFVQWPIZDSRUHQXEGONBWPYOXWUASCNAIIRFYZFBSWWANTEUISVEITTFQNFIQTJZCAEAZKCSGYSTSWNAPJFXDYCTLICCCLBEMGFLQHEWGWQZSEAINFFQDHKPQMRSYTWKZCWQJANQWDPPHPXVUCMYKWOBJG", 1024 );
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofSetColor(255);
    ofSetRectMode( OF_RECTMODE_CENTER ); // center the image
    rcQRCode.draw(ofGetWidth()/2 - 300,ofGetHeight()/2-150);
    OFQRCode.draw(ofGetWidth()/2,ofGetHeight()/2-150); // draw smack in the middle
    labQRCode.draw(ofGetWidth()/2 + 300,ofGetHeight()/2-150);
    longQRCode.draw(ofGetWidth()/2 + 300,ofGetHeight()/2+150 , 250, 250);
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
