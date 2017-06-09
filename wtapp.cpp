#include "wtapp.h"
#include "user_data.h"

#include <Wt/WApplication>
#include <Wt/WBreak>
#include <Wt/WText>
#include <Wt/WLabel>
#include <Wt/WLineEdit>
#include <Wt/WContainerWidget>
#include <Wt/WPushButton>
#include <Wt/WHBoxLayout>
#include <Wt/WMessageBox>
#include <Wt/WBootstrapTheme>
using namespace Wt;



WtApp::WtApp(const WEnvironment & env)
    : WApplication(env)
{
    setTitle("Our Project");

    root()->addWidget(new WText("Enter Your Username "));

    nameEdit1 = new WLineEdit(root());                     // allow text input
    nameEdit1->setFocus();	                              // give focus
    root()->addWidget(new WBreak());
    root()->addWidget(new WText("Enter Your PassWord "));
    nameEdit2 = new WLineEdit(root());
    //nameEdit2->setFocus();
    // This might need some changes:
    User_data * user1;
    user1->set_username(nameEdit1->text());
    user1->set_password(nameEdit2->text());

    WPushButton *button = new WPushButton("Join", root());
    button->setMargin(5, Left);                            // add 5 pixels margin
    root()->addWidget(new WBreak());

    greeting_ = new WText(root());

    button->clicked().connect(this, &WtApp::slt_btn_clicked);


    //These lines are for examination:
    WText * e = new WText();
    e->setText("You've beeen saved as ," + user1->show_username());
    WText * e1 = new WText();
    e1->setText("Your pass is saved as ," + user1->show_pass());




    /*WHBoxLayout * w_lay_h_main = new WHBoxLayout();
    //WLabel * w_lbl_name1 = new WLabel("Welcome to this chatroom!");
    WLabel * w_lbl_name2 = new WLabel("Enter Your Username");
    WLabel * w_lbl_name3 = new WLabel("Enter Your Password");
    WLineEdit * w_led_name1 = new WLineEdit();
    WLineEdit * w_led_name2 = new WLineEdit();
    w_led_name1->setMaximumSize(WLength::Auto, 25);
    w_led_name2->setMaximumSize(WLength::Auto, 25);
    WPushButton * w_btn = new WPushButton("Enter");
    w_btn->setMaximumSize(50,40);



    //w_lay_h_main->addWidget(w_lbl_name1, 1);
    w_lay_h_main->addWidget(w_lbl_name2, 1);
    w_lay_h_main->addWidget(w_led_name1, 1);
    root()->addWidget(new WBreak());
    WText *  greeting_ = new WText(root());
    w_lay_h_main->addWidget(w_lbl_name3, 1);
    w_lay_h_main->addWidget(w_led_name2, 1);
    w_lay_h_main->addStretch(1);
    w_lay_h_main->addWidget(w_btn, 1);
    root()->setLayout(w_lay_h_main);

    w_btn->clicked().connect(this, &WtApp::slt_btn_clicked);*/

    /*WBootstrapTheme *bootstrapTheme = new WBootstrapTheme(this);
    bootstrapTheme->setVersion(WBootstrapTheme::Version3);
    bootstrapTheme->setResponsive(true);
    this->setTheme(bootstrapTheme);
    // load the default bootstrap3 (sub-)theme
    useStyleSheet("resources/themes/bootstrap/3/bootstrap-theme.min.css");*/












}
void WtApp::slt_btn_clicked()
{
    greeting_->setText("Hello there, " + nameEdit1->text());
    /*WMessageBox * msg_bx_warn = new WMessageBox();
    msg_bx_warn->setText("Hello");
    msg_bx_warn->setModal(false);
    msg_bx_warn->show();*/
    return;
    //cout << "btn clicked\n";

}
